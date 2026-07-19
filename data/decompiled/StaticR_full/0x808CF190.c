/* Function at 0x808CF190, size=156 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808CF190(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808CF198
    *(0x14 + r1) = r0; // stw @ 0x808CF19C
    r3 = *(0 + r3); // lwz @ 0x808CF1A0
    r3 = *(0 + r3); // lwz @ 0x808CF1A4
    r0 = *(0 + r3); // lwz @ 0x808CF1A8
    if (>=) goto 0x0x808cf1d4;
    if (>=) goto 0x0x808cf1c8;
    if (>=) goto 0x0x808cf200;
    /* b 0x808cf208 */ // 0x808CF1C4
    if (>=) goto 0x0x808cf208;
    /* b 0x808cf1f8 */ // 0x808CF1D0
    if (>=) goto 0x0x808cf1e8;
    if (>=) goto 0x0x808cf208;
    /* b 0x808cf1f0 */ // 0x808CF1E4
    if (>=) goto 0x0x808cf208;
    /* li r3, 0x44 */ // 0x808CF1F0
    /* b 0x808cf21c */ // 0x808CF1F4
    /* li r3, 0x48 */ // 0x808CF1F8
    /* b 0x808cf21c */ // 0x808CF1FC
    /* li r3, 0x45 */ // 0x808CF200
    /* b 0x808cf21c */ // 0x808CF204
    FUN_808CE220(r3, r3); // bl 0x808CE220
    /* li r3, 0x23 */ // 0x808CF210
    if (==) goto 0x0x808cf21c;
    /* li r3, 0x24 */ // 0x808CF218
    r0 = *(0x14 + r1); // lwz @ 0x808CF21C
    return;
}