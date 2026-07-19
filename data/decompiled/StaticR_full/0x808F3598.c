/* Function at 0x808F3598, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808F3598(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F35A4
    r31 = r3;
    FUN_8078E714(); // bl 0x8078E714
    /* lis r3, 0 */ // 0x808F35B0
    /* li r0, 0 */ // 0x808F35B4
    r3 = r3 + 0; // 0x808F35B8
    /* lis r4, 0 */ // 0x808F35BC
    r6 = r3 + 0x1c; // 0x808F35C0
    /* lis r5, 0 */ // 0x808F35C4
    r8 = r3 + 0x7c; // 0x808F35C8
    *(0 + r31) = r3; // stw @ 0x808F35CC
    r3 = r31 + 0x150; // 0x808F35D0
    r4 = r4 + 0; // 0x808F35D4
    *(0x54 + r31) = r6; // stw @ 0x808F35D8
    r5 = r5 + 0; // 0x808F35DC
    /* li r6, 0x30 */ // 0x808F35E0
    /* li r7, 0x1d */ // 0x808F35E4
    *(0x94 + r31) = r8; // stw @ 0x808F35E8
    *(0x104 + r31) = r0; // stw @ 0x808F35EC
    *(0x138 + r31) = r0; // stw @ 0x808F35F0
    FUN_805E3430(r6, r7); // bl 0x805E3430
}