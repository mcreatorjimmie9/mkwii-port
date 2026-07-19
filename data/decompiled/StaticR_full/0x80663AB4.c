/* Function at 0x80663AB4, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80663AB4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x24 + r1) = r0; // stw @ 0x80663AC0
    *(0x1c + r1) = r31; // stw @ 0x80663AC4
    if (==) goto 0x0x80663afc;
    r0 = *(0x33c + r3); // lwz @ 0x80663ACC
    if (==) goto 0x0x80663ae4;
    if (==) goto 0x0x80663af0;
    /* b 0x80663bb4 */ // 0x80663AE0
    /* li r0, 4 */ // 0x80663AE4
    *(0x33c + r3) = r0; // stw @ 0x80663AE8
    /* b 0x80663bb4 */ // 0x80663AEC
    /* li r0, 5 */ // 0x80663AF0
    *(0x33c + r3) = r0; // stw @ 0x80663AF4
    /* b 0x80663bb4 */ // 0x80663AF8
    r0 = *(0x33c + r3); // lwz @ 0x80663AFC
    if (==) goto 0x0x80663b14;
    if (==) goto 0x0x80663b20;
    /* b 0x80663b28 */ // 0x80663B10
    /* li r0, 6 */ // 0x80663B14
    *(0x33c + r3) = r0; // stw @ 0x80663B18
    /* b 0x80663b28 */ // 0x80663B1C
    /* li r0, 7 */ // 0x80663B20
    *(0x33c + r3) = r0; // stw @ 0x80663B24
    /* li r4, 0 */ // 0x80663B28
    r3 = r3 + 0xec; // 0x80663B2C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80663B34
    r31 = r3;
    if (==) goto 0x0x80663b50;
    if (==) goto 0x0x80663ba4;
    /* b 0x80663bb4 */ // 0x80663B4C
    r3 = *(0 + r3); // lwz @ 0x80663B50
    /* slwi r0, r0, 4 */ // 0x80663B54
    /* lwzx r3, r3, r0 */ // 0x80663B58
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80663B60
    /* lis r0, 0x4330 */ // 0x80663B64
    *(0xc + r1) = r4; // stw @ 0x80663B68
    /* lis r3, 0 */ // 0x80663B6C
    /* lfd f3, 0(r3) */ // 0x80663B70
    /* lis r5, 0 */ // 0x80663B74
    *(8 + r1) = r0; // stw @ 0x80663B78
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80663B80
}