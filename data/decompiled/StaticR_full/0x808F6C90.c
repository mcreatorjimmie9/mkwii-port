/* Function at 0x808F6C90, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_808F6C90(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808F6C9C
    *(0xc + r1) = r31; // stw @ 0x808F6CA0
    if (==) goto 0x0x808f6ce4;
    r7 = r5 >> 0x1f; // srawi
    r6 = r4 >> 0x1f; // srawi
    r5 = r7 ^ r5; // 0x808F6CB0
    r0 = r6 ^ r4; // 0x808F6CB4
    /* subf r31, r7, r5 */ // 0x808F6CB8
    /* subf r4, r6, r0 */ // 0x808F6CBC
    if (<) goto 0x0x808f6cd0;
    /* li r3, 1 */ // 0x808F6CC8
    /* b 0x808f6ce8 */ // 0x808F6CCC
    FUN_805E364C(r3); // bl 0x805E364C
    if (>=) goto 0x0x808f6ce4;
    /* li r3, 1 */ // 0x808F6CDC
    /* b 0x808f6ce8 */ // 0x808F6CE0
    /* li r3, 0 */ // 0x808F6CE4
    r0 = *(0x14 + r1); // lwz @ 0x808F6CE8
    r31 = *(0xc + r1); // lwz @ 0x808F6CEC
    return;
}