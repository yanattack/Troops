// random.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#define __VER "1.0.0"
int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
    //char vf,vs,vt;
	ofstream objWriter;
	objWriter.open("Inlog.txt");
	string name = "C++ [";
	try {
	//for (vf = '0';vf < '9';vf++) {
		//for (vs = '0';vs < '9';vs++) {
			//for (vt = '0';vt <'9';vt++) {
				//if(objWriter.fail()) 
					//cout << "Fail:" << name << endl;
				//else
					//cout << "Ok:" << name << endl;
				//objWriter.close();
			//}
		//}
	//}
		for(int vn = 0;vn < INT_MAX;vn++) {
			if (vn % 3 == 2 && vn % 5 == 4 && vn %7 == 6) {
				objWriter << "Found：" << vn << " Is ok!" << endl;
				cout  << "Found：" << vn << " Is ok!" << endl;
			} else {
				objWriter << "NOT：" << vn << " Is no!" << endl;
			    cout << "NOT: " << vn <<" Is no!" << endl;
			}
			
		}
	}
	catch(int ca) {
		cout << "Error!Number:" << ca << endl;
	}
	objWriter.close();
	cin.get();
	
}

