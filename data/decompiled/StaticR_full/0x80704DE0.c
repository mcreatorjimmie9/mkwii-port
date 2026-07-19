/* Function at 0x80704DE0, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80704DE0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x24 + r1) = r0; // stw @ 0x80704DEC
    *(0x1c + r1) = r31; // stw @ 0x80704DF0
    r31 = r3;
    if (==) goto 0x0x80704eb4;
    if (!=) goto 0x0x80704e44;
    r3 = r3 + 8; // 0x80704E04
    FUN_805E3430(r3, r4); // bl 0x805E3430
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = *(8 + r1); // lwz @ 0x80704E14
    if (!=) goto 0x0x80704e2c;
    /* li r0, 4 */ // 0x80704E20
    *(4 + r31) = r0; // stw @ 0x80704E24
    /* b 0x80704eb4 */ // 0x80704E28
    FUN_805E3430(); // bl 0x805E3430
    /* li r3, 0 */ // 0x80704E30
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 2 */ // 0x80704E38
    *(4 + r31) = r0; // stw @ 0x80704E3C
    /* b 0x80704eb4 */ // 0x80704E40
    /* mulli r4, r4, 0xa */ // 0x80704E44
    r0 = r5 + -1; // 0x80704E48
    r4 = r4 + 0x283c; // 0x80704E50
    if (<=) goto 0x0x80704e80;
    r0 = r5 + -7; // 0x80704E58
    if (<=) goto 0x0x80704e80;
    if (==) goto 0x0x80704e80;
    if (==) goto 0x0x80704e90;
    if (==) goto 0x0x80704e90;
    /* b 0x80704ea0 */ // 0x80704E7C
    /* li r0, 2 */ // 0x80704E80
    *(4 + r3) = r0; // stw @ 0x80704E84
    r4 = r4 + r5; // 0x80704E88
    /* b 0x80704eac */ // 0x80704E8C
    /* li r0, 4 */ // 0x80704E90
}