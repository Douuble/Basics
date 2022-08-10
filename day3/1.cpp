#include<iostream>
#define MAX 256
using namespace std;

int main() {
	int a[] = { 4,8,7,15 };
	int b[] = { 7,9,17,14 };
	int c[] = { 6,9,12,8 };
	int d[] = { 6,7,14,6 };
	int park[] = { 0,0,0,0 };                  //用标志位来检查车位是否占用
	int temp[MAX] = {};                              
	int T = temp[0];
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	int flag4 = 0;

	int i, j, k, e;
	int n=0;
	for (i = 0; i < 4; i++) {
		if (flag1 == 0) {
			if (park[i] == 0) {
				park[i] = 1;
				temp[n] = temp[n] + a[i];
				flag1 = 1;
			}
		}
		for (j = 0; j < 4; j++) {
			if (flag2 == 0) {
				if (park[j] == 0) {
					park[j] = 1;
					temp[n] = temp[n] + b[j];
					flag2 = 1;
				}
			}

			for (k = 0; k < 4; k++) {
				if (flag3 == 0) {
					if (park[k] == 0) {
						park[k] = 1;
						temp[n] = temp[n] + c[k];
						flag3 = 1;
					}
				}
				for (e = 0; e < 4; e++) {         
					if (flag4 == 0) {
						if (park[e] == 0) {
							park[e] = 1;
							temp[n] = temp[n] + d[e];
							flag4 = 1;
						}
					}
				}break;
			}
		}
		if (temp[n] > temp[n + 1]) {
			T = temp[n];
			n++;
		}
	}

/*
	switch (a[i]) {
	case 4:x = 'A'; break;
	case 8:x = 'B'; break;
	case 7:x = 'C'; break; 
	case 15:x = 'D'; break;
	}

	switch (b[i]) {
	case 7:y = 'A'; break;
	case 9:y = 'B'; break;
	case 17:y = 'C'; break;
	case 14:y = 'D'; break;
	}
	
	switch (c[i]) {
	case 6:z = 'A'; break;
	case 9:z = 'B'; break;
	case 12:z = 'C'; break;
	case 8:z = 'D'; break;
	}
	
	switch (d[i]) {
	case 6:w = 'D'; break;
	case 7:w = 'B'; break;
	case 14:w = 'C'; break;
	}
	*/
	cout << "T:" << T <<  endl;
}