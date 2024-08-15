db.collection.aggregate([

{ $match: { age: { $gt: 30 } } },

{ $group: { _id: "$gender", count: { $sum: 1 } } },

{ $sort: { count: -1 } },

{ $skip: 2 },

{ $project: { _id: 0, gender: "$_id", count: 1 } }

])
