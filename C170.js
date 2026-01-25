function main(input) {
    const array = input.split(" ")
    const split = array.flatMap(a => a.split("\n"))
    const numArray = split.map(e => parseInt(e)).filter((x) => { return x === x })

    const number = numArray[0]
    const target = numArray[1]
    const prices = numArray.slice(2)

    const sum = prices.reduce((acc, cur) => acc + Math.trunc(cur / 100), 0)

    if ((target - sum) < 0) {
        console.log(0)
        return
    }
    console.log((target - sum) * 100)
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));