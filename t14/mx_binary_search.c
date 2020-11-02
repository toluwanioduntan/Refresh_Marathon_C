int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int left = 0;
	size--;
	while (left <= size) {
		int mid = (size + left) / 2;
		*count += 1;
		if (mx_strcmp(s, arr[mid]) == 0)
			return mid;
		if (mx_strcmp(s, arr[mid]) > 0)
			left = mid + 1;
		else
			size = mid - 1;
	}
	*count = 0;
	return -1;
}
