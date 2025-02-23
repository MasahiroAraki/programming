// 構造的部分型の例
const adminUser: {id: string; permission: string} = {
  id: "YamadaTaro",
  permission: "admin",
};

const user: {id: string} = adminUser;
console.log("ユーザID: " + user.id + "です。");
