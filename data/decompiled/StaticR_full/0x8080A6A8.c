/* Function at 0x8080A6A8, size=152 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8080A6A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x8080A6B4
    r31 = r3;
    FUN_8089FD54(); // bl 0x8089FD54
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r6 = *(0x58 + r31); // lwz @ 0x8080A6C8
    r0 = *(0x5c + r31); // lwz @ 0x8080A6D0
    *(0x4c + r1) = r0; // stw @ 0x8080A6D8
    /* li r5, 0 */ // 0x8080A6DC
    *(0x48 + r1) = r6; // stw @ 0x8080A6E0
    r6 = *(0x60 + r31); // lwz @ 0x8080A6E4
    r0 = *(0x64 + r31); // lwz @ 0x8080A6E8
    *(0x54 + r1) = r0; // stw @ 0x8080A6EC
    *(0x50 + r1) = r6; // stw @ 0x8080A6F0
    r6 = *(0x68 + r31); // lwz @ 0x8080A6F4
    r0 = *(0x6c + r31); // lwz @ 0x8080A6F8
    *(0x5c + r1) = r0; // stw @ 0x8080A6FC
    *(0x58 + r1) = r6; // stw @ 0x8080A700
    r6 = *(0x70 + r31); // lwz @ 0x8080A704
    r0 = *(0x74 + r31); // lwz @ 0x8080A708
    *(0x64 + r1) = r0; // stw @ 0x8080A70C
    *(0x60 + r1) = r6; // stw @ 0x8080A710
    r6 = *(0x78 + r31); // lwz @ 0x8080A714
    r0 = *(0x7c + r31); // lwz @ 0x8080A718
    *(0x6c + r1) = r0; // stw @ 0x8080A71C
    *(0x68 + r1) = r6; // stw @ 0x8080A720
    r6 = *(0x80 + r31); // lwz @ 0x8080A724
    r0 = *(0x84 + r31); // lwz @ 0x8080A728
    *(0x74 + r1) = r0; // stw @ 0x8080A72C
    *(0x70 + r1) = r6; // stw @ 0x8080A730
    FUN_805C70D8(); // bl 0x805C70D8
    FUN_805E3430(r3); // bl 0x805E3430
}