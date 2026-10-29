import chalk from "chalk";

import moment from "moment";

console.log(chalk.yellow("hello"));

const todayDate = moment().format("MMMM Do YYYY, h:mm:ss a");

console.log("Today Date:", chalk.red(todayDate));
