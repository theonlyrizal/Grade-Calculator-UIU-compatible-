#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int rll, crsn, crdt, scr=0;
	double grd, gsc=0, sgsc=0, cgpa;
	char nm[20];
	printf("Your name : ");
	scanf("%s", nm);
	printf("Roll: 0112");
	scanf("%d", &rll);
	printf("Number of courses taken : ");
	scanf("%d", &crsn);
	printf("put Individual course grade and then course credit with a space for all the %d courses", crsn);
	for (crsn>0; crsn--;)
	{
		scanf("%lf %d", &grd, &crdt);
		gsc=grd*crdt;
		sgsc=sgsc+gsc;
		scr=scr+crdt;
		grd=0;
		crdt=0;
	}
	cgpa=sgsc/scr;
	if (cgpa>=1 && cgpa<2)
	{
		printf("***Name : %s, roll : 0112%d, Your grade is : %lf \n-----What a shame! why r u even alive?-----\n\n\n\n", nm, rll, cgpa);
	}
	else if (cgpa>=2 && cgpa<3)
	{
		printf("***Name : %s, roll : 0112%d, Your grade is : %lf \n-----Bruh! You gotta do better----\n\n\n\n", nm, rll, cgpa);
	}
	else if (cgpa>=3 && cgpa<3.5)
	{
		printf("***Name : %s, roll : 0112%d, Your grade is : %lf \n-----Good grade! But you wont get a Job in future, lol----\n\n\n\n", nm, rll, cgpa);
	}
	else if (cgpa>=3.5 && cgpa<4)
	{
		printf("***Name : %s, roll : 0112%d, Your grade is : %lf \n-----Whoa! Good grade, Congo on your waiver----\n\n\n\n", nm, rll, cgpa);
	}
	else if (cgpa=4)
	{
		printf("***Name : %s, roll : 0112%d, Your grade is : %lf \n-----Congo bro! you can apply for a TA/Grader job in the varsity!----\n\n\n\n", nm, rll, cgpa);
	}
	return main();
}
