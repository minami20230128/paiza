function main(input) {
    const array = input.split(" ")
    const split = array.flatMap(a => a.split("\n"))
    const numArray = split.map(e => parseInt(e))

    const number = numArray[0]
    const passingScore = numArray[1]
    const scores = numArray.slice(1)

    const sorted = scores.sort((a, b) => a - b)
    const centerIndex = number % 2 == 0 ? Math.trunc(number / 2) - 1 : Math.trunc(number / 2)
    const center = scores[centerIndex]
    if (center > passingScore) {
        console.log(0)
        return
    }
    console.log(passingScore - center)
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));