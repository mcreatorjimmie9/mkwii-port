/* Function at 0x806AD284, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806AD284(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806AD28C
    *(0x18 + r1) = r30; // stw @ 0x806AD298
    *(0x14 + r1) = r29; // stw @ 0x806AD29C
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806AD2A4
    r3 = *(0 + r3); // lwz @ 0x806AD2A8
    r30 = *(0x244 + r3); // lwz @ 0x806AD2AC
    if (!=) goto 0x0x806ad2c0;
    /* li r30, 0 */ // 0x806AD2B8
    /* b 0x806ad314 */ // 0x806AD2BC
    /* lis r31, 0 */ // 0x806AD2C0
    r31 = r31 + 0; // 0x806AD2C4
    if (==) goto 0x0x806ad310;
    r12 = *(0 + r30); // lwz @ 0x806AD2CC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806AD2D4
    /* mtctr r12 */ // 0x806AD2D8
    /* bctrl  */ // 0x806AD2DC
    /* b 0x806ad2f8 */ // 0x806AD2E0
    if (!=) goto 0x0x806ad2f4;
    /* li r0, 1 */ // 0x806AD2EC
    /* b 0x806ad304 */ // 0x806AD2F0
    r3 = *(0 + r3); // lwz @ 0x806AD2F4
    if (!=) goto 0x0x806ad2e4;
    /* li r0, 0 */ // 0x806AD300
    if (==) goto 0x0x806ad310;
    /* b 0x806ad314 */ // 0x806AD30C
    /* li r30, 0 */ // 0x806AD310
    r0 = *(0x1cf4 + r30); // lwz @ 0x806AD314
    if (==) goto 0x0x806ad32c;
    if (==) goto 0x0x806ad340;
    /* b 0x806ad350 */ // 0x806AD328
    r3 = r29 + 0x94; // 0x806AD32C
    /* li r4, 0xfa0 */ // 0x806AD330
    /* li r5, 0 */ // 0x806AD334
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    /* b 0x806ad350 */ // 0x806AD33C
    r3 = r29 + 0x94; // 0x806AD340
    /* li r4, 0xfa1 */ // 0x806AD344
    /* li r5, 0 */ // 0x806AD348
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r0 = *(0x10 + r29); // lwz @ 0x806AD350
    if (!=) goto 0x0x806ad378;
    r3 = r29 + 0x208; // 0x806AD35C
    /* li r4, 0 */ // 0x806AD360
    FUN_80649EEC(r3, r4); // bl 0x80649EEC
    r3 = r29 + 0x914; // 0x806AD368
    /* li r4, 0x10da */ // 0x806AD36C
    /* li r5, 0 */ // 0x806AD370
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    /* li r0, -1 */ // 0x806AD378
    *(0xcac + r29) = r0; // stw @ 0x806AD37C
    r31 = *(0x1c + r1); // lwz @ 0x806AD380
    r30 = *(0x18 + r1); // lwz @ 0x806AD384
    r29 = *(0x14 + r1); // lwz @ 0x806AD388
    r0 = *(0x24 + r1); // lwz @ 0x806AD38C
    return;
}