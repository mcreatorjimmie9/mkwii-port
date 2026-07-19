/* Function at 0x806F53F0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_806F53F0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x806F53F8
    *(0x14 + r1) = r0; // stw @ 0x806F53FC
    r0 = *(0 + r4); // lwz @ 0x806F5400
    if (!=) goto 0x0x806f543c;
    /* lis r5, 1 */ // 0x806F540C
    r4 = r3;
    r3 = r5 + -0x5ff8; // 0x806F5414
    /* li r5, 4 */ // 0x806F5418
    FUN_805E3430(r5, r4, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x806f5434;
    /* lis r4, 0 */ // 0x806F5428
    r4 = *(0 + r4); // lwz @ 0x806F542C
    FUN_806F5454(r4); // bl 0x806F5454
    /* lis r4, 0 */ // 0x806F5434
}