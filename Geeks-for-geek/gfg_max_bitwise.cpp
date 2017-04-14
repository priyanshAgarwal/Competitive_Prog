#include <iostream>
#include <vector>

using namespace std;

void maxProduct(int arr[],int n)
{
	int a=arr[0],b=arr[1];
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(arr[i]*arr[j]>a*b)
				a=arr[i],b=arr[j];
				
				
	cout<<"The max pair is "<<a<<","<<b<<" and product is "<<a*b;
}

int main()
{
	
    int arr[] = {70080, 43371, 3593, 77904, 55686, 31458, 95044, 4121, 89789, 42000, 23747, 5040, 54656, 11808, 
	62289, 55338, 65466, 90066, 33200, 97389, 97237, 31113, 36224, 29397, 79342, 3943, 42370, 55683, 17978, 
	97322, 2334, 11782, 75398, 46483, 22693, 25514, 50766, 27711, 45353, 95993, 81136, 84852, 49030, 74320,
	32788, 22196, 32013, 53290, 18261, 28016, 26888, 79473, 99850, 34925, 56727, 84964, 94911, 73852, 37877,
	4379, 54007, 1548, 53859, 25280, 91473, 1209, 5755, 52508, 78685, 79004, 52860, 89564, 41072, 56457, 
	30425, 34936, 63601, 51090, 73134, 87516, 58622, 44320, 48743, 37994, 64503, 17886, 57956, 1627, 71177,
	16167, 31508, 37801, 36530, 20335, 13803, 89693, 20053, 63739, 41413, 50862, 98837, 48174, 50660, 22763,
	21190, 84408, 21318, 79782, 49206, 13888, 67756, 24101, 61791, 58591, 81881, 70983, 22243, 43989, 75507, 
	2714, 69185, 65457, 53823, 13614, 37583, 31971, 98957, 92955, 14688, 76789, 14614, 16356, 84243, 55449,
	77275, 6972, 62390, 43508, 20334, 63790, 27674, 5637, 33214, 65873, 89182, 78942, 83447, 34391, 1642,
	31275, 40683, 17406, 66339, 10299, 88177, 73036, 61521, 90246, 51151, 36395, 99712, 88754, 61584, 22505,
	6696, 75522, 36342, 22468, 34469, 43426, 69830, 40205, 37526, 42017, 25217, 75146, 4080, 17901, 84228,
	21881, 7130, 49521, 40125, 42723, 81669, 7770, 4564, 68040, 80009, 22976, 71888, 22045, 54329, 48197,
	71270, 86354, 2621, 81484, 72442, 57423, 1113, 12412, 78994, 47459, 30636, 74533, 7698, 62242, 12414, 
	35897, 83418, 9093, 88679, 3023, 11089, 94782, 75045, 81782, 15450, 57023, 38726, 59388, 49538, 34269,
	51578, 21819, 49761, 12326, 17171, 7359, 47718, 36265, 32225, 13515, 64609, 20478, 5239, 36785, 15996, 
	24196, 4325, 32209, 58412, 61100, 60697, 82894, 29030, 29690, 34701, 57310, 33210, 67647, 30065, 1297,
	3698, 46919, 11962, 1398, 37953, 6518, 92329, 17322, 85196, 2760, 98509, 3841, 69653, 79198, 82488,
	10564, 18321, 43621, 56524, 17019, 75684, 73900, 27819, 11849, 85107, 16762, 74913,9912, 12396, 77623, 33589};
	int n = sizeof(arr)/sizeof(arr[0]);
	maxProduct(arr,n);	
	return 0;
}

