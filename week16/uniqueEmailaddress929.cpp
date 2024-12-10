class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;
        string normalisedEmail = "";

        for (const auto& email : emails) {
            bool isDomain = false;
            string localName = "";
            string domainName = "";

            // allocate local and domain name
            for (char ch : email) {
                if (ch == '@') {
                    isDomain = true;
                    continue;
                } else if (isDomain) {
                    domainName += ch;
                } else {
                    localName += ch;
                }
            }
            string normaliseLocal = "";
            for(char ch : localName){
                if(ch == '+') break;
                if(ch != '.') normaliseLocal += ch;
            }

            normalisedEmail = normaliseLocal + '@' + domainName;
            uniqueEmails.insert(normalisedEmail);
        }
        return uniqueEmails.size();
    }
};