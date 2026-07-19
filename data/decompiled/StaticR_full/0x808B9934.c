/* Function at 0x808B9934, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808B9934(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808B993C
    *(0x14 + r1) = r0; // stw @ 0x808B9940
    *(0xc + r1) = r31; // stw @ 0x808B9944
    r31 = r3;
    r4 = *(0 + r5); // lwz @ 0x808B994C
    r4 = *(0 + r4); // lwz @ 0x808B9950
    r0 = *(0 + r4); // lwz @ 0x808B9954
    if (==) goto 0x0x808b9968;
    if (!=) goto 0x0x808b9984;
    r4 = *(0x3d8 + r3); // lwz @ 0x808B9968
    /* li r0, 0 */ // 0x808B996C
    *(0x3dd + r3) = r0; // stb @ 0x808B9970
    r4 = r4 + 1; // 0x808B9974
    *(0x3d8 + r3) = r4; // stw @ 0x808B9978
    *(0x3dc + r3) = r0; // stb @ 0x808B997C
    /* b 0x808b999c */ // 0x808B9980
    /* li r0, 1 */ // 0x808B9984
    *(0x3dd + r3) = r0; // stb @ 0x808B9988
    *(0x3dc + r3) = r0; // stb @ 0x808B998C
    r3 = *(0 + r5); // lwz @ 0x808B9990
    r3 = *(0 + r3); // lwz @ 0x808B9994
    FUN_80685E54(); // bl 0x80685E54
    /* li r0, 0 */ // 0x808B999C
    *(0x215c + r31) = r0; // stb @ 0x808B99A0
    r3 = r31;
    FUN_808B2D44(r3); // bl 0x808B2D44
    r3 = r31;
    /* li r4, 0 */ // 0x808B99B0
    /* li r5, 0 */ // 0x808B99B4
    FUN_806724E0(r3, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x808B99BC
    r31 = *(0xc + r1); // lwz @ 0x808B99C0
    return;
}