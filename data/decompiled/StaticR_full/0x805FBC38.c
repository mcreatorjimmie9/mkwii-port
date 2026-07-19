/* Function at 0x805FBC38, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805FBC38(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FBC44
    r31 = r3;
    r0 = *(0x8c + r3); // lbz @ 0x805FBC4C
    if (==) goto 0x0x805fbc84;
    r3 = *(0x80 + r3); // lwz @ 0x805FBC58
    FUN_80620660(); // bl 0x80620660
    r3 = *(0x84 + r31); // lwz @ 0x805FBC60
    if (==) goto 0x0x805fbc74;
    FUN_805EACF0(); // bl 0x805EACF0
    /* b 0x805fbc84 */ // 0x805FBC70
    r3 = *(0x7c + r31); // lwz @ 0x805FBC74
    /* fmuls f0, f1, f1 */ // 0x805FBC78
    r3 = *(0x48 + r3); // lwz @ 0x805FBC7C
    /* stfs f0, 0(r3) */ // 0x805FBC80
    r0 = *(0x14 + r1); // lwz @ 0x805FBC84
    r31 = *(0xc + r1); // lwz @ 0x805FBC88
    return;
}