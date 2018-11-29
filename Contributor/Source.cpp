
#include <iostream>

#include <vector>

#include <algorithm>

#include <random>

#include <ctime>



int main()

{

	double start_t, end_t;  // ��ʱ��.



	// �ڴ�����ʱ��ʼ.

	start_t = clock();

	std::vector<double> V(1000000000);  // 10�ڸ���, ��Ҫ7.5GB�ڴ�.

	// �ڴ�����ʱ���������ʱ��.

	end_t = clock();

	std::cout << (end_t - start_t) / (CLOCKS_PER_SEC * 60)

		<< " minutes" << std::endl;



	// ���ݸ�ֵ��ʱ��ʼ.

	start_t = clock();

	// �������������������0.0��1.0֮���ʵ��.

	std::default_random_engine generator(time(NULL));

	std::uniform_real_distribution<double> distribution(0.0, 1.0);

	for (size_t i = 0; i < V.size(); ++i)

		V[i] = distribution(generator);

	// ���ݸ�ֵ��ʱ���������ʱ��.

	end_t = clock();

	std::cout << (end_t - start_t) / (CLOCKS_PER_SEC * 60)

		<< " minutes" << std::endl;



	// �����ʱ��ʼ.

	start_t = clock();

	// ��10�ڸ����������, ���������ʱ��Ҳûʲô̫����.

	std::sort(V.begin(), V.end());

	// �����ʱ���������ʱ��.

	end_t = clock();

	std::cout << (end_t - start_t) / (CLOCKS_PER_SEC * 60)

		<< " minutes" << std::endl;



	return 0;

}