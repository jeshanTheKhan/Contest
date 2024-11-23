#include<bits/stdc++.h>

int main()
{
    // Read input values for Alice, Beto, and Clara
    int A, B, C;
    std::cin >> A >> B >> C;

    // Check for a winner
    if (A != B && A != C)
    {
        // Alice is the winner
        std::cout << "A" << std::endl;
    }
    else if (B != A && B != C)
    {
        // Beto is the winner
        std::cout << "B" << std::endl;
    }
    else if (C != A && C != B)
    {
        // Clara is the winner
        std::cout << "C" << std::endl;
    }
    else
    {
        // No winner
        std::cout << "*" << std::endl;
    }

    return 0;
}
