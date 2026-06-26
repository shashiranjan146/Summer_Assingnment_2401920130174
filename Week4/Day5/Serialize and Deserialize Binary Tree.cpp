class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        if (!root)
            return "#,";

        return to_string(root->val) + "," +
               serialize(root->left) +
               serialize(root->right);
    }

    // Helper function for deserialization
    TreeNode *build(stringstream &ss)
    {
        string val;
        getline(ss, val, ',');

        if (val == "#")
            return nullptr;

        TreeNode *node = new TreeNode(stoi(val));
        node->left = build(ss);
        node->right = build(ss);

        return node;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        stringstream ss(data);
        return build(ss);
    }
};