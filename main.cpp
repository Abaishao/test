#include <stdio.h>

int main() {
	int syringeSizes[] = { 1, 3, 5 };
	int numSyringeSizes = sizeof(syringeSizes) / sizeof(syringeSizes[0]);

	double dosageOptions[][2] = { {0.8, 1}, {2, 3}, {3, 3}, {4, 5}, {5, 5} };
	int numDosageOptions = sizeof(dosageOptions) / sizeof(dosageOptions[0]);

	for (int i = 0; i < numSyringeSizes; i++) {
		int syringeSize = syringeSizes[i];

		for (int j = 0; j < numDosageOptions; j++) {
			double actualDosage = dosageOptions[j][0] / syringeSize;

			for (int numInjections = 10; numInjections <= 180; numInjections += 10) {
				double singleDose = actualDosage / numInjections;

				printf("Syringe Size: %dml, Dosage Option: %.1f/%.1fml, Num Injections: %d, Single Dose: %.3fml\n", syringeSize, dosageOptions[j][0], dosageOptions[j][1], numInjections, singleDose);
			}
		}
	}

	return 0;
}