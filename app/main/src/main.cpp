#include <speex/speex_echo.h>

spx_int16_t  input_frame[512] = {0};// signal from mic
spx_int16_t  echo_frame[512] = {0};// played sigal
spx_int16_t  aec_output_frame[512] = {0};

int main( void )
{
	SpeexEchoState *echo_state;
	int frame_size;
	int filter_length;

	frame_size = 512;
	filter_length = 64;

	echo_state = speex_echo_state_init(frame_size, filter_length);

	speex_echo_cancellation(
			echo_state, input_frame, echo_frame, aec_output_frame);
}
