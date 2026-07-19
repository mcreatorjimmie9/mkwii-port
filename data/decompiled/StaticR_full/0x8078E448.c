/* Function at 0x8078E448, size=340 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8078E448(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8078E460
    r29 = r3;
    r3 = r3 + 0x94; // 0x8078E468
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x8078e480;
    /* li r3, 0 */ // 0x8078E478
    /* b 0x8078e588 */ // 0x8078E47C
    r3 = *(0x80 + r29); // lwz @ 0x8078E480
    if (!=) goto 0x0x8078e494;
    r31 = r29 + 0x80; // 0x8078E48C
    /* b 0x8078e560 */ // 0x8078E490
    if (==) goto 0x0x8078e4a0;
    r0 = *(0x90 + r3); // lwz @ 0x8078E498
    /* b 0x8078e4a4 */ // 0x8078E49C
    /* li r0, -1 */ // 0x8078E4A0
    *(8 + r1) = r0; // stw @ 0x8078E4A4
    r3 = *(0x84 + r29); // lwz @ 0x8078E4A8
    if (!=) goto 0x0x8078e4bc;
    r31 = r29 + 0x84; // 0x8078E4B4
    /* b 0x8078e560 */ // 0x8078E4B8
    if (==) goto 0x0x8078e4c8;
    r0 = *(0x90 + r3); // lwz @ 0x8078E4C0
    /* b 0x8078e4cc */ // 0x8078E4C4
    /* li r0, -1 */ // 0x8078E4C8
    *(0xc + r1) = r0; // stw @ 0x8078E4CC
    r3 = *(0x88 + r29); // lwz @ 0x8078E4D0
    if (!=) goto 0x0x8078e4e4;
    r31 = r29 + 0x88; // 0x8078E4DC
    /* b 0x8078e560 */ // 0x8078E4E0
    if (==) goto 0x0x8078e4f0;
    r0 = *(0x90 + r3); // lwz @ 0x8078E4E8
    /* b 0x8078e4f4 */ // 0x8078E4EC
    /* li r0, -1 */ // 0x8078E4F0
    *(0x10 + r1) = r0; // stw @ 0x8078E4F4
    r3 = *(0x8c + r29); // lwz @ 0x8078E4F8
    if (!=) goto 0x0x8078e50c;
    r31 = r29 + 0x8c; // 0x8078E504
    /* b 0x8078e560 */ // 0x8078E508
    if (==) goto 0x0x8078e518;
    r0 = *(0x90 + r3); // lwz @ 0x8078E510
    /* b 0x8078e51c */ // 0x8078E514
    /* li r0, -1 */ // 0x8078E518
    *(0x14 + r1) = r0; // stw @ 0x8078E51C
    r4 = r30;
    r3 = r29 + 0x94; // 0x8078E524
    /* li r6, 4 */ // 0x8078E52C
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x8078e544;
    /* li r31, 0 */ // 0x8078E53C
    /* b 0x8078e560 */ // 0x8078E540
    /* slwi r0, r3, 2 */ // 0x8078E544
    r31 = r29 + r0; // 0x8078E548
    r3 = *(0x80 + r31); // lwzu @ 0x8078E54C
    if (==) goto 0x0x8078e560;
    /* li r4, 0 */ // 0x8078E558
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x8078e584;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078E574
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078e588 */ // 0x8078E580
    /* li r3, 0 */ // 0x8078E584
    r0 = *(0x34 + r1); // lwz @ 0x8078E588
    r31 = *(0x2c + r1); // lwz @ 0x8078E58C
    r30 = *(0x28 + r1); // lwz @ 0x8078E590
    r29 = *(0x24 + r1); // lwz @ 0x8078E594
}