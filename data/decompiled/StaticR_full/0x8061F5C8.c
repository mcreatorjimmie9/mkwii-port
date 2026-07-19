/* Function at 0x8061F5C8, size=112 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

int FUN_8061F5C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061F5D4
    if (==) goto 0x0x8061f610;
    /* lis r5, 0 */ // 0x8061F5DC
    r4 = r3;
    r5 = r5 + 0; // 0x8061F5E4
    r3 = r5 + 0x128; // 0x8061F5E8
    /* crclr cr1eq */ // 0x8061F5EC
    FUN_8063803C(r5, r4, r5, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x8061F5F4
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061F5FC
    /* li r4, 2 */ // 0x8061F600
    /* li r6, 0 */ // 0x8061F604
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    /* b 0x8061f628 */ // 0x8061F60C
    /* lis r4, 0 */ // 0x8061F610
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061F618
    /* li r4, 0 */ // 0x8061F61C
    /* li r6, 0 */ // 0x8061F620
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    r0 = *(0x14 + r1); // lwz @ 0x8061F628
    return;
}