/* Function at 0x808EDB94, size=280 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808EDB94(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808EDBA0
    /* li r31, 0 */ // 0x808EDBA4
    r3 = r31;
    FUN_808F0FAC(r3); // bl 0x808F0FAC
    if (==) goto 0x0x808edbbc;
    /* b 0x808edbcc */ // 0x808EDBB8
    r31 = r31 + 1; // 0x808EDBBC
    if (<) goto 0x0x808edba8;
    /* li r31, -1 */ // 0x808EDBC8
    if (>=) goto 0x0x808edbf4;
    if (>=) goto 0x0x808edbe8;
    if (>=) goto 0x0x808edc08;
    /* b 0x808edc28 */ // 0x808EDBE4
    if (>=) goto 0x0x808edc18;
    /* b 0x808edc10 */ // 0x808EDBF0
    if (>=) goto 0x0x808edc28;
    if (>=) goto 0x0x808edc20;
    /* b 0x808edc10 */ // 0x808EDC04
    /* li r3, 0x93 */ // 0x808EDC08
    /* b 0x808edc98 */ // 0x808EDC0C
    /* li r3, 0x90 */ // 0x808EDC10
    /* b 0x808edc98 */ // 0x808EDC14
    /* li r3, 0x92 */ // 0x808EDC18
    /* b 0x808edc98 */ // 0x808EDC1C
    /* li r3, 0x91 */ // 0x808EDC20
    /* b 0x808edc98 */ // 0x808EDC24
    /* li r31, 0 */ // 0x808EDC28
    r3 = r31;
    FUN_808F2924(r3, r3); // bl 0x808F2924
    if (==) goto 0x0x808edc40;
    /* b 0x808edc50 */ // 0x808EDC3C
    r31 = r31 + 1; // 0x808EDC40
    if (<) goto 0x0x808edc2c;
    /* li r31, 0x3a */ // 0x808EDC4C
    r0 = r31 + -0x22; // 0x808EDC50
    if (<=) goto 0x0x808edc94;
    if (<=) goto 0x0x808edc84;
    r0 = r31 + -0xc; // 0x808EDC64
    if (<=) goto 0x0x808edc8c;
    /* li r3, -1 */ // 0x808EDC74
    if (!=) goto 0x0x808edc98;
    /* li r3, 0x93 */ // 0x808EDC7C
    /* b 0x808edc98 */ // 0x808EDC80
    /* li r3, 0x90 */ // 0x808EDC84
    /* b 0x808edc98 */ // 0x808EDC88
    /* li r3, 0x92 */ // 0x808EDC8C
    /* b 0x808edc98 */ // 0x808EDC90
    /* li r3, 0x91 */ // 0x808EDC94
    r0 = *(0x14 + r1); // lwz @ 0x808EDC98
    r31 = *(0xc + r1); // lwz @ 0x808EDC9C
    return;
}