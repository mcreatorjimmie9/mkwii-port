/* Function at 0x805F6CE4, size=104 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F6CE4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r7 = *(0 + r5); // lwz @ 0x805F6CEC
    r6 = *(4 + r5); // lwz @ 0x805F6CF4
    *(0x3c + r1) = r31; // stw @ 0x805F6CF8
    r31 = r4;
    r0 = *(8 + r5); // lwz @ 0x805F6D00
    *(0x38 + r1) = r30; // stw @ 0x805F6D08
    r30 = r3;
    *(0x14 + r1) = r7; // stw @ 0x805F6D14
    *(0x18 + r1) = r6; // stw @ 0x805F6D18
    *(0x1c + r1) = r0; // stw @ 0x805F6D1C
    FUN_805F6C8C(r5); // bl 0x805F6C8C
    r7 = *(0x20 + r1); // lwz @ 0x805F6D24
    r3 = r30;
    r6 = *(0x24 + r1); // lwz @ 0x805F6D2C
    r4 = r31;
    r0 = *(0x28 + r1); // lwz @ 0x805F6D34
    *(8 + r1) = r7; // stw @ 0x805F6D3C
    *(0xc + r1) = r6; // stw @ 0x805F6D40
    *(0x10 + r1) = r0; // stw @ 0x805F6D44
    FUN_805F6CE0(r5); // bl 0x805F6CE0
}