function solution(skill, skill_trees) {
  var answer = 0;
  let arr = skill.split("");

  for (let i in skill_trees) {
    let str = skill_trees[i]
      .split("")
      .filter((e) => arr.includes(e))
      .join("");
    if (str === skill.substring(0, str.length)) {
      answer++;
    }
  }

  return answer;
}
// filter와 substring 활용에 대해 더 잘 기억해두자.
