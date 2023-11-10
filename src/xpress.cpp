#include <cstddef>
#include <bitset>
#include <cstdlib>
#include <iostream>
#include <vector>


/*
void lz77CompressTest(const std::vector<unsigned char>& input, std::vector<unsigned char>& output) {
    uint32_t flags = 0;
    uint32_t flagCount = 0;
    uint32_t flagOutputPosition = 0;
    uint32_t outputPosition = 4;
    uint32_t inputPosition = 0;
    uint32_t lastLengthHalfByte = 0;

    while (inputPosition < input.size()) {
        // Try to find a match with a length of at least 3
        // (assuming match must be within the last 8,192 bytes)
        // ...

        // If no match was found or inputPosition + 2 is beyond the input buffer
        if (no match or inputPosition + 2 beyond input buffer ) {
            output.push_back(input[inputPosition]);
            ++inputPosition;
            flags <<= 1;
            flagCount = flagCount + 1;

            if (flagCount == 32) {
                // Write the 32-bit value flags to flagOutputPosition
                // ...
                flagCount = 0;
                flagOutputPosition = outputPosition;
                outputPosition += 4;
            }
        } else {
            // A valid match was found
            // ...

            flags = (flags << 1) | 1;
            flagCount = flagCount + 1;

            if (flagCount == 32) {
                // Write the 32-bit value flags to flagOutputPosition
                // ...
                flagCount = 0;
                flagOutputPosition = outputPosition;
                outputPosition += 4;
            }

            // Advance inputPosition to the first byte that was not in the match
            // ...
        }
    }

    flags <<= (32 - flagCount);
    flags |= (1 << (32 - flagCount)) - 1;

    // Write the 32-bit value flags to flagOutputPosition
    // ...
}*/

void lz77Compress(const std::vector<unsigned char>& inputBuffer, std::vector<unsigned char>& outputBuffer) {
    uint32_t flags = 0;
    uint32_t flagCount = 0;
    uint32_t flagOutputPosition = 0;
    uint32_t outputPosition = 4;
    uint32_t inputPosition = 0;
    uint32_t lastLengthHalfByte = 0;

    while (inputPosition < inputBuffer.size()) {    // inputPosition has not reached end of inputBuffer
      if (true || inputPosition + 2 >= inputBuffer.size()) {   // no match found | nothing left in inputBuffer

      }
      else {        // valid match found

      }
    }
}

int main() {
    std::string a = "abcdefghijklmnopqrstuvwxyz";
    std::vector<unsigned char> inputBuffer(a.begin(), a.end());
    std::vector<unsigned char> compressedBuffer;

    lz77Compress(inputBuffer, compressedBuffer);

    // The final compressed size is the value of outputPosition
    std::cout << "Final compressed size: " << compressedBuffer.size() << std::endl;

    return EXIT_SUCCESS;
}