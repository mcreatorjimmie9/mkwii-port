/* Function at 0x8070A2C8, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8070A2C8(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8070A2DC
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x8070A2E4
    if (!=) goto 0x0x8070a394;
    r0 = *(0x54 + r3); // lwz @ 0x8070A2F0
    if (!=) goto 0x0x8070a394;
    /* lis r3, 0 */ // 0x8070A2FC
    r3 = *(0 + r3); // lwz @ 0x8070A300
    FUN_806F58E0(r3); // bl 0x806F58E0
    if (==) goto 0x0x8070a394;
    /* lis r3, 0 */ // 0x8070A310
    r3 = *(0 + r3); // lwz @ 0x8070A314
    r3 = *(0 + r3); // lwz @ 0x8070A318
    r30 = *(0x144 + r3); // lwz @ 0x8070A31C
    if (!=) goto 0x0x8070a330;
    /* li r30, 0 */ // 0x8070A328
    /* b 0x8070a384 */ // 0x8070A32C
    /* lis r31, 0 */ // 0x8070A330
    r31 = r31 + 0; // 0x8070A334
    if (==) goto 0x0x8070a380;
    r12 = *(0 + r30); // lwz @ 0x8070A33C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8070A344
    /* mtctr r12 */ // 0x8070A348
    /* bctrl  */ // 0x8070A34C
    /* b 0x8070a368 */ // 0x8070A350
    if (!=) goto 0x0x8070a364;
    /* li r0, 1 */ // 0x8070A35C
    /* b 0x8070a374 */ // 0x8070A360
    r3 = *(0 + r3); // lwz @ 0x8070A364
    if (!=) goto 0x0x8070a354;
    /* li r0, 0 */ // 0x8070A370
    if (==) goto 0x0x8070a380;
    /* b 0x8070a384 */ // 0x8070A37C
    /* li r30, 0 */ // 0x8070A380
    /* li r0, 3 */ // 0x8070A384
    *(0x54 + r29) = r0; // stw @ 0x8070A388
    r3 = r30;
    FUN_80649164(r3); // bl 0x80649164
    r0 = *(0x24 + r1); // lwz @ 0x8070A394
    r31 = *(0x1c + r1); // lwz @ 0x8070A398
    r30 = *(0x18 + r1); // lwz @ 0x8070A39C
    r29 = *(0x14 + r1); // lwz @ 0x8070A3A0
    return;
}