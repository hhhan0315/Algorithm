function solution(nums) {
  var answer = 0;
  const length = nums.length / 2;

  let set = new Set();
  for (let i in nums) {
    set.add(nums[i]);
  }

  answer = set.size < length ? set.size : length;

  return answer;
}
