#include <stdio.h>

int	main(void)
{
    int     i;
    int     j;
    double  r;
    double  g;
    double  b;
    int     canvas_width;
    int     canvas_height;

    //캔버스의 가로, 세로 픽셀값
    canvas_width = 512;
    canvas_height = 512;

    // 랜더링
    // P3 는 색상값이 아스키코드라는 뜻, 그리고 다음 줄은 캔버스의 가로, 세로 픽셀 수, 마지막은 사용할 색상값
    printf("P3\n%d %d\n255\n", canvas_width, canvas_height);
    j = canvas_height - 1; // -1 because index begins at 0, not 1
    while (j >= 0) //starts drawing from bottom line (left to right)
    {
        i = 0;
        while (i < canvas_width)
        {
            r = (double)i / (canvas_width - 1); //make gradient effect
            g = (double)j / (canvas_height - 1); //make gradient effect
            b = 0.25;
            printf("%d %d %d\n", (int)(255.999 * r),
                                (int)(255.999 * g),
                                (int)(255.999 * b)); //use decimal to correctly convert float to int?
        ++i;
        }
    --j;
    }
    return (0);
}