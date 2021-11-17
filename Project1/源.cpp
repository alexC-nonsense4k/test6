#include <iostream>
using namespace std;
void main()
{
	int maze[5][5] = { {0,0,1,0,1},
		{1,0,0,0,1},
		{0,0,1,1,0},
		{0,1,0,0,0},
		{0,0,0,1,0} };
	int i_cur= 0; 
	int j_cur= 0;
	int i_pre;
	int j_pre;
	int dir=0;
	int step[50] = { 0 }; 
	int stepe=0;
	while (i_cur != 4 || j_cur != 4)
	{
		
		switch (dir)
		{
		case 1:
			if(i_cur-1>=0&&maze[i_cur-1][j_cur]!=1)
			{
				i_pre = i_cur;
				j_pre = j_cur;
				i_cur = i_cur-1;
				j_cur = j_cur ;
				maze[i_pre][j_pre] = 1;
				step[stepe] = 1;
				stepe++;
				dir = 0;
			}
				
			break;
		case 2:
			if (j_cur + 1 <= 4 && maze[i_cur][j_cur+1] != 1)
			{
				i_pre = i_cur;
				j_pre = j_cur;
				i_cur = i_cur ;
				j_cur = j_cur+ 1;
				maze[i_pre][j_pre] = 1;
				step[stepe] = 2;
				stepe++;
				dir = 0;
			}
			break;
		case 3:
			if (i_cur + 1 <= 4 && maze[i_cur+1][j_cur ] != 1)
			{
				i_pre = i_cur;
				j_pre = j_cur;
				i_cur = i_cur+ 1;
				j_cur = j_cur ;
				maze[i_pre][j_pre] = 1;
				step[stepe] = 3;
				stepe++;
				dir = 0;
			}
			break;
		case 4:
			if (j_cur - 1 >= 0 && maze[i_cur][j_cur-1] != 1)
			{
				i_pre = i_cur;
				j_pre = j_cur;
				i_cur = i_cur;
				j_cur = j_cur-1;
				maze[i_pre][j_pre] = 1;
				step[stepe] = 4;
				stepe++;
				dir = 0;
			}
			break;
		case 5:
			maze[i_cur][j_cur] = 1;
			maze[i_pre][j_pre] = 0;
			i_cur =i_pre;
			j_cur = j_pre;
			switch (step[stepe-2])
			{
			case 1:
				i_pre = i_pre + 1;
				j_pre = j_pre;
				break;
			case 2:
				i_pre = i_pre;
				j_pre = j_pre-1;
				break;
			case 3:
				i_pre = i_pre-1;
				j_pre = j_pre;
				break;
			case 4:
				i_pre = i_pre;
				j_pre = j_pre+1;
				break;
			}
			stepe--;
			dir = 0;
			break;
		default:
			break;
		}
		dir++;	
	}
    if (i_cur == 4 && j_cur == 4)
	{
		cout << "find the way" << endl;
	}
			

	                   
	                      
}
