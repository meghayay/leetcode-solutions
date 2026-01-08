// Last updated: 8/1/2026, 5:22:31 pm
func isZeroArray(nums []int, queries [][]int) bool {
	deltaArray := make([]int, len(nums)+1)
	for _, query := range queries {
		left := query[0]
		right := query[1]
		deltaArray[left] += 1
		deltaArray[right+1] -= 1
	}
	operationCounts := make([]int, len(deltaArray))
	currentOperations := 0
	for i, delta := range deltaArray {
		currentOperations += delta
		operationCounts[i] = currentOperations
	}
	for i := 0; i < len(nums); i++ {
		if operationCounts[i] < nums[i] {
			return false
		}
	}
	return true
}