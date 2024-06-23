import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

class Logger {
    public static void main(String[] args) {
        /// For using logger
        
        // create a logger from {slf4j} 
        
        private Logger logger = LoggerFactory.getLogger(Logger.class);
                    // here getLogger method takes class as parameter

        var item = 5;
                    
        logger.info("Logs whatever you want");

        logger.info("Item {}",item); // Item {5}
            
        
    }
}
