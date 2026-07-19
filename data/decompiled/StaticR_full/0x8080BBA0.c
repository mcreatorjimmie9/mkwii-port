/* Function at 0x8080BBA0, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8080BBA0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8080BBA8
    *(0x34 + r1) = r0; // stw @ 0x8080BBAC
    /* lfs f1, 0(r6) */ // 0x8080BBB4
    *(0x2c + r1) = r31; // stw @ 0x8080BBB8
    r31 = r3;
    r4 = r31 + 0xb4; // 0x8080BBC0
    r8 = *(0x20 + r3); // lwz @ 0x8080BBC4
    r7 = *(0x24 + r8); // lwz @ 0x8080BBCC
    r0 = *(0x28 + r8); // lwz @ 0x8080BBD0
    *(0x18 + r1) = r0; // stw @ 0x8080BBD4
    *(0x14 + r1) = r7; // stw @ 0x8080BBD8
    r0 = *(0x2c + r8); // lwz @ 0x8080BBDC
    *(0x1c + r1) = r0; // stw @ 0x8080BBE0
    FUN_8080BC28(); // bl 0x8080BC28
    /* lfs f0, 8(r1) */ // 0x8080BBE8
    r3 = r31 + 0xb4; // 0x8080BBEC
    /* stfs f0, 0xb4(r31) */ // 0x8080BBF0
    /* lfs f0, 0xc(r1) */ // 0x8080BBF4
    /* stfs f0, 0xb8(r31) */ // 0x8080BBF8
    /* lfs f0, 0x10(r1) */ // 0x8080BBFC
    /* stfs f0, 0xbc(r31) */ // 0x8080BC00
    FUN_805E3430(); // bl 0x805E3430
}