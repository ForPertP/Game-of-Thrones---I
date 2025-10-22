using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;


    public static string gameOfThrones(string s)
    {
        int[] freq = new int[26];

        foreach (char c in s)
        {
            freq[c - 'a']++;
        }

        int oddCount = 0;
        foreach (int count in freq)
        {
            if (count % 2 != 0)
                oddCount++;
        }

        return (oddCount <= 1) ? "YES" : "NO";
    }
