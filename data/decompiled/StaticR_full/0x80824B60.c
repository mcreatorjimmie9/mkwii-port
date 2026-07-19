/* Function at 0x80824B60, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80824B60(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80824B70
    *(8 + r1) = r30; // stw @ 0x80824B74
    r30 = r3;
    /* b 0x80824b98 */ // 0x80824B7C
    /* clrlwi r0, r31, 0x18 */ // 0x80824B80
    r3 = *(0x14 + r30); // lwz @ 0x80824B84
    /* mulli r0, r0, 0x248 */ // 0x80824B88
    r3 = r3 + r0; // 0x80824B8C
    FUN_808229BC(); // bl 0x808229BC
    r31 = r31 + 1; // 0x80824B94
    r0 = *(0x10 + r30); // lbz @ 0x80824B98
    /* clrlwi r3, r31, 0x18 */ // 0x80824B9C
    if (<) goto 0x0x80824b80;
    r0 = *(0x14 + r1); // lwz @ 0x80824BA8
    r31 = *(0xc + r1); // lwz @ 0x80824BAC
    r30 = *(8 + r1); // lwz @ 0x80824BB0
    return;
}