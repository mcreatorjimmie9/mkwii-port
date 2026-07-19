/* Function at 0x8061F3F0, size=296 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_8061F3F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8061F3FC
    /* lis r31, 0 */ // 0x8061F400
    r31 = r31 + 0; // 0x8061F404
    FUN_8061F518(); // bl 0x8061F518
    /* lis r3, 0 */ // 0x8061F40C
    r3 = r3 + 0; // 0x8061F410
    r4 = r3 + 0x9d; // 0x8061F414
    r3 = r3 + 0xb5; // 0x8061F418
    /* crclr cr1eq */ // 0x8061F41C
    FUN_8063803C(r3, r3, r4, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x8061F424
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061F42C
    /* li r4, 2 */ // 0x8061F430
    /* li r6, 0 */ // 0x8061F434
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    *(0x10 + r31) = r3; // stw @ 0x8061F440
    if (==) goto 0x0x8061f450;
    r0 = r3 + 8; // 0x8061F448
    *(0x14 + r31) = r0; // stw @ 0x8061F44C
    /* lis r3, 0 */ // 0x8061F450
    r3 = r3 + 0; // 0x8061F454
    r4 = r3 + 0xc2; // 0x8061F458
    r3 = r3 + 0xd9; // 0x8061F45C
    /* crclr cr1eq */ // 0x8061F460
    FUN_8063803C(r3, r3, r4, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x8061F468
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061F470
    /* li r4, 2 */ // 0x8061F474
    /* li r6, 0 */ // 0x8061F478
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    *(0x18 + r31) = r3; // stw @ 0x8061F484
    if (==) goto 0x0x8061f494;
    r0 = r3 + 4; // 0x8061F48C
    *(0x1c + r31) = r0; // stw @ 0x8061F490
    /* lis r3, 0 */ // 0x8061F494
    r3 = r3 + 0; // 0x8061F498
    r4 = r3 + 0xe6; // 0x8061F49C
    r3 = r3 + 0xfd; // 0x8061F4A0
    /* crclr cr1eq */ // 0x8061F4A4
    FUN_8063803C(r3, r3, r4, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x8061F4AC
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061F4B4
    /* li r4, 2 */ // 0x8061F4B8
    /* li r6, 0 */ // 0x8061F4BC
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    *(0x20 + r31) = r3; // stw @ 0x8061F4C8
    if (==) goto 0x0x8061f4d8;
    r0 = r3 + 4; // 0x8061F4D0
    *(0x24 + r31) = r0; // stw @ 0x8061F4D4
    /* lis r4, 0 */ // 0x8061F4D8
    /* lis r3, 0 */ // 0x8061F4DC
    r4 = r4 + 0; // 0x8061F4E0
    r3 = *(0 + r3); // lwz @ 0x8061F4E4
    r5 = r4 + 0x10a; // 0x8061F4E8
    /* li r6, 0 */ // 0x8061F4EC
    /* li r4, 5 */ // 0x8061F4F0
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    r0 = r3 + 4; // 0x8061F4F8
    *(0x28 + r31) = r3; // stw @ 0x8061F4FC
    *(0x2c + r31) = r0; // stw @ 0x8061F500
    r31 = *(0xc + r1); // lwz @ 0x8061F504
    r0 = *(0x14 + r1); // lwz @ 0x8061F508
    return;
}