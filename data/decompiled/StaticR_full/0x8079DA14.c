/* Function at 0x8079DA14, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_8079DA14(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8079DA20
    r31 = r3;
    FUN_807A03C8(); // bl 0x807A03C8
    if (!=) goto 0x0x8079da8c;
    /* lis r3, 0 */ // 0x8079DA34
    r3 = *(0 + r3); // lwz @ 0x8079DA38
    r3 = *(0x10 + r3); // lwz @ 0x8079DA3C
    r0 = r3 + -0x32; // 0x8079DA40
    if (<=) goto 0x0x8079da8c;
    r3 = r31;
    /* li r4, 4 */ // 0x8079DA50
    FUN_8079E0C0(r3, r4); // bl 0x8079E0C0
    /* lis r31, 0 */ // 0x8079DA58
    /* li r4, 0x368 */ // 0x8079DA5C
    r3 = *(0 + r31); // lwz @ 0x8079DA60
    /* li r5, 0x12c */ // 0x8079DA64
    FUN_8078BEAC(r4, r5); // bl 0x8078BEAC
    r3 = *(0 + r31); // lwz @ 0x8079DA6C
    /* li r4, 0x339 */ // 0x8079DA70
    /* li r5, 0x12c */ // 0x8079DA74
    FUN_8078BEAC(r5, r4, r5); // bl 0x8078BEAC
    r3 = *(0 + r31); // lwz @ 0x8079DA7C
    /* li r4, 0x30c */ // 0x8079DA80
    /* li r5, 0x12c */ // 0x8079DA84
    FUN_8078BEAC(r5, r4, r5); // bl 0x8078BEAC
    r0 = *(0x14 + r1); // lwz @ 0x8079DA8C
    r31 = *(0xc + r1); // lwz @ 0x8079DA90
    return;
}