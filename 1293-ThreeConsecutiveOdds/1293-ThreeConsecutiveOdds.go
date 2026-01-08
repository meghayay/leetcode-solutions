// Last updated: 8/1/2026, 5:23:01 pm
func threeConsecutiveOdds(arr []int) bool {
    for i := 0; i <= len(arr)-3; i++ {
        if arr[i]%2 == 1 && arr[i+1]%2 == 1 && arr[i+2]%2 == 1 {
            return true
        }
    }
    return false
}