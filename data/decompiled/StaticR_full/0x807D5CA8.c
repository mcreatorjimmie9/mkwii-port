/* Function at 0x807D5CA8, size=96 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D5CA8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    r9 = *(0 + r4); // lwz @ 0x807D5CB0
    *(0x64 + r1) = r0; // stw @ 0x807D5CB4
    r8 = *(4 + r4); // lwz @ 0x807D5CB8
    *(0x5c + r1) = r31; // stw @ 0x807D5CBC
    r7 = *(8 + r4); // lwz @ 0x807D5CC0
    r6 = *(0 + r5); // lwz @ 0x807D5CC4
    r4 = *(4 + r5); // lwz @ 0x807D5CC8
    r0 = *(8 + r5); // lwz @ 0x807D5CCC
    *(0x44 + r1) = r9; // stw @ 0x807D5CD0
    *(0x48 + r1) = r8; // stw @ 0x807D5CD4
    *(0x4c + r1) = r7; // stw @ 0x807D5CD8
    *(0x38 + r1) = r6; // stw @ 0x807D5CDC
    *(0x3c + r1) = r4; // stw @ 0x807D5CE0
    *(0x40 + r1) = r0; // stw @ 0x807D5CE4
    r3 = *(4 + r3); // lwz @ 0x807D5CE8
    r3 = *(0 + r3); // lwz @ 0x807D5CEC
    FUN_8061DC48(); // bl 0x8061DC48
    r31 = r3;
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}