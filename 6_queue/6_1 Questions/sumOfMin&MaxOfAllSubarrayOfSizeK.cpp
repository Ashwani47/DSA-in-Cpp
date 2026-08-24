long long solve(int arr[], int n, int k) {
    deque<int> maxi, mini;
    long long ans = 0;

    for (int i = 0; i < n; i++) {

        if (!maxi.empty() && maxi.front() <= i - k)
            maxi.pop_front();

        if (!mini.empty() && mini.front() <= i - k)
            mini.pop_front();

        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);

        if (i >= k - 1) {
            ans += arr[maxi.front()] + arr[mini.front()];
        }
    }

    return ans;
}