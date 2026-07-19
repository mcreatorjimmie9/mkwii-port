/* Function at 0x80871CBC, size=340 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80871CBC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80871CCC
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x80871CD4
    r30 = r3;
    if (==) goto 0x0x80871dcc;
    r0 = *(0x1a8 + r3); // lwz @ 0x80871CE0
    /* slwi r8, r0, 1 */ // 0x80871CE4
    r0 = r5 / r8; // 0x80871CE8
    r0 = r0 * r8; // 0x80871CEC
    /* subf r7, r0, r5 */ // 0x80871CF0
    if (<=) goto 0x0x80871d30;
    /* slwi r0, r4, 3 */ // 0x80871CFC
    r0 = r3 + r0; // 0x80871D00
    r6 = r0 + r7; // 0x80871D04
    r0 = *(0x18c + r6); // lbz @ 0x80871D08
    if (==) goto 0x0x80871d30;
    /* lis r5, 0 */ // 0x80871D14
    /* slwi r0, r4, 5 */ // 0x80871D18
    r5 = r5 + 0; // 0x80871D1C
    /* slwi r3, r7, 2 */ // 0x80871D20
    r0 = r5 + r0; // 0x80871D24
    /* lwzx r3, r3, r0 */ // 0x80871D28
    /* b 0x80871df8 */ // 0x80871D2C
    r0 = r5 / r8; // 0x80871D30
    /* slwi r6, r4, 3 */ // 0x80871D34
    /* li r7, 0 */ // 0x80871D38
    r6 = r3 + r6; // 0x80871D3C
    r3 = r6;
    r0 = r0 * r8; // 0x80871D44
    /* subf. r5, r0, r5 */ // 0x80871D48
    r0 = r5 + 1; // 0x80871D4C
    /* mtctr r0 */ // 0x80871D50
    if (<) goto 0x0x80871d70;
    r0 = *(0x18c + r3); // lbz @ 0x80871D58
    if (!=) goto 0x0x80871d68;
    r7 = r7 + 1; // 0x80871D64
    r3 = r3 + 1; // 0x80871D68
    if (counter-- != 0) goto 0x0x80871d58;
    /* subfic r0, r8, 8 */ // 0x80871D70
    r3 = r6 + r8; // 0x80871D74
    /* mtctr r0 */ // 0x80871D78
    if (>=) goto 0x0x80871dc4;
    r0 = *(0x18c + r3); // lbz @ 0x80871D84
    if (==) goto 0x0x80871d94;
    r7 = r7 + -1; // 0x80871D90
    if (!=) goto 0x0x80871db8;
    /* lis r5, 0 */ // 0x80871D9C
    /* slwi r0, r4, 5 */ // 0x80871DA0
    r5 = r5 + 0; // 0x80871DA4
    /* slwi r3, r8, 2 */ // 0x80871DA8
    r0 = r5 + r0; // 0x80871DAC
    /* lwzx r3, r3, r0 */ // 0x80871DB0
    /* b 0x80871df8 */ // 0x80871DB4
    r3 = r3 + 1; // 0x80871DB8
    r8 = r8 + 1; // 0x80871DBC
    if (counter-- != 0) goto 0x0x80871d84;
    /* li r3, -1 */ // 0x80871DC4
    /* b 0x80871df8 */ // 0x80871DC8
    /* li r3, 0x1e */ // 0x80871DCC
    FUN_8089E314(r8, r3, r3); // bl 0x8089E314
    if (!=) goto 0x0x80871de0;
    r31 = r31 + 1; // 0x80871DDC
    r3 = *(0x1a8 + r30); // lwz @ 0x80871DE0
    r0 = r31 / r3; // 0x80871DE4
    r0 = r0 * r3; // 0x80871DE8
    /* subf r0, r0, r31 */ // 0x80871DEC
    /* slwi r3, r0, 1 */ // 0x80871DF0
    r3 = r3 + 0x1e; // 0x80871DF4
    r0 = *(0x14 + r1); // lwz @ 0x80871DF8
    r31 = *(0xc + r1); // lwz @ 0x80871DFC
    r30 = *(8 + r1); // lwz @ 0x80871E00
    return;
}