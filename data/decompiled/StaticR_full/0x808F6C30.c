/* Function at 0x808F6C30, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808F6C30(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808F6C3C
    *(0xc + r1) = r31; // stw @ 0x808F6C40
    r31 = r4;
    if (<) goto 0x0x808f6c54;
    /* li r3, 1 */ // 0x808F6C4C
    /* b 0x808f6c7c */ // 0x808F6C50
    if (>) goto 0x0x808f6c64;
    /* li r3, 0 */ // 0x808F6C5C
    /* b 0x808f6c7c */ // 0x808F6C60
    /* li r4, 0x64 */ // 0x808F6C64
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r0 = r31 ^ r3; // 0x808F6C6C
    /* cntlzw r0, r0 */ // 0x808F6C70
    r0 = r31 << r0; // slw
    /* srwi r3, r0, 0x1f */ // 0x808F6C78
    r0 = *(0x14 + r1); // lwz @ 0x808F6C7C
    r31 = *(0xc + r1); // lwz @ 0x808F6C80
    return;
}