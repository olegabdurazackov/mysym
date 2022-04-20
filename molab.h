/**********
 * sampl
 * *******/

#define DEVNAM "olab" // имя устройства
#define LEN_MSG 255    // длины буферов устройства
#define LOG(...) if( debug !=0 ) printk( KERN_INFO "! "__VA_ARGS__ )
#define MIN( A, B ) (( A<B ) ? A : B )

MODULE_LICENSE( "GPL" );
MODULE_AUTHOR( "Oleg Abdurazackov <olab@email.su>" );
MODULE_VERSION( "1.2" );
