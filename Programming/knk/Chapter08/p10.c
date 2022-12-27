//section 5.8의 도착시간 출발 시간을 각각 다른 배열에 저장후 출발시간이 가장 가까운 
// 시간대를 출력;       copy, modifiy

#include<stdio.h>

#define T ((int) sizeof(departure) / sizeof(departure[0]))

int main(void)
{
	int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival[8] = {616, 712, 811, 900, 968, 1075, 2540, 2818};
	int h, m, user_time;
	
	printf("Enter a 24-hour time: ");
	scanf(" %d: %d", &h, &m);
	
	user_time = h * 60 + m;
	
	printf("Closet departure time is ");
	for (int i = 0 ; i < T - 1; i++) 
    {
		if (user_time <= departure[i] + (departure[i + 1] - departure[i]) / 2)
        {
			if (departure[i] <= 583)
				printf("%d:%02d a.m., arriving at %d:%02d a.m.\n", 
                departure[i] / 60, departure[i] % 60, arrival[i] / 60, arrival[i] % 60);
			else if (departure[i] <= 679)
				printf("%d:%02d a.m., arriving at %d:%02d p.m.\n", 
                departure[i] / 60, departure[i] % 60, arrival[i] / 60 - 12, arrival[i] % 60);
			else if (departure[i] <= 767)
				printf("%d:%02d p.m., arriving at %d:%02d p.m.\n", 
                departure[i] / 60, departure[i] % 60, arrival[i] / 60, arrival[i] % 60);
			else if (departure[i] <= 2565)
				printf("%d:%02d p.m., arriving at %d:%02d p.m.\n", 
                departure[i] / 60 - 12, departure[i] % 60, arrival[i] / 60 - 12, arrival[i] % 60);
			break;
		}
	}
	
	return 0;
} 