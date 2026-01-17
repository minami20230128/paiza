function main(input) {
    const array = input.split(" ")
    const split = array.flatMap(a => a.split("\n"))
    const numArray = split.map(e => parseInt(e)).filter((x) => { return x === x })

    const accountingNum = numArray[0]
    const bottomRequirement = numArray[1]
    const sumRequirement = numArray[2]
    const accountingRecords = numArray.slice(3)

    if (accountingRecords.filter(record => record >= bottomRequirement).length < 3) {
        console.log("bronze")
        return
    }

    const sum = accountingRecords.reduce((acc, cur) => acc + cur, 0)

    if (sum < sumRequirement) {
        console.log("bronze")
        return
    }

    console.log("silver")
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));