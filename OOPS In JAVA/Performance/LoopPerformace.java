import java.io.*;
import java.util.*;

class LoopPerformace {
	public static void main (String[] args) {
		List<Integer> list = new ArrayList<>();
		long startTime;
		long endTime;
		for (int i = 0; i < 1000000; i++) {
			list.add(i);
		}
		// Type 1
		startTime = Calendar.getInstance().getTimeInMillis();
		for (int i : list) {
			int a = i;
		}
		endTime = Calendar.getInstance().getTimeInMillis();
		System.out.println("For each loop :: " + (endTime - startTime) + " ms");
		
		// Type 2
		startTime = Calendar.getInstance().getTimeInMillis();
		for (int j = 0; j < list.size(); j++) {
			int a = list.get(j);
		}
		endTime = Calendar.getInstance().getTimeInMillis();
		System.out.println("Using collection.size() :: " + (endTime - startTime) + " ms");
		
		// Type 3
		startTime = Calendar.getInstance().getTimeInMillis();
		int size = list.size();
		for (int j = 0; j < size; j++) {
			int a = list.get(j);
		}
		endTime = Calendar.getInstance().getTimeInMillis();
		System.out.println("By calculating collection.size() first :: " + (endTime - startTime) + " ms");
	
		// Type 4
		startTime = Calendar.getInstance().getTimeInMillis();
		for(int j = list.size()-1; j >= 0; j--) {
			int a = list.get(j);
		}
		endTime = Calendar.getInstance().getTimeInMillis();
		System.out.println("Using [int j = list.size(); j > size ; j--] :: " + (endTime - startTime) + " ms");
	}
}
/* NOTE: OUTPUT
For each loop :: 56 ms
Using collection.size() :: 20 ms
By calculating collection.size() first :: 20 ms
Using [int j = list.size(); j > size ; j--] :: 22 ms
*/
