#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Environment facts array
const char *environmentFacts[] = {
   "The Amazon rainforest produces 20% of the world's oxygen.",
    "Recycling one ton of paper saves 17 trees.",
    "The Great Barrier Reef is the world's largest coral reef system.",
    "One million seabirds and 100,000 marine mammals are killed annually from plastic in our oceans.",
    "The average American uses 7 trees per year in paper, wood, and other products made from trees.",
    "An acre of trees can remove about 13 tons of dust and gases every year from the surrounding environment.",
    "A single tree can absorb as much as 48 pounds of carbon dioxide per year.",
    "By recycling just one aluminum can, enough energy would be saved to power a TV for about three hours.",
    "Each ton of recycled paper can save 17 trees, 380 gallons of oil, 3 cubic yards of landfill space, 4000 kilowatts of energy, and 7000 gallons of water.",
    "More than 20 percent of the world oxygen is produced in the Amazon Rainforest.",
    "Rainforests are responsible for roughly one-third (28%) of the Earth's oxygen but most (70%) of the oxygen in the atmosphere is produced by marine plants.",
    "Rainforests are often called the lungs of the planet for their role in absorbing carbon dioxide, a greenhouse gas, and producing oxygen, upon which all animals depend for survival.",
    "Rainforests cover only 2 percent of the planet's surface area but are home to 50 percent of the Earth's plants and animals.",
    "The Amazon Rainforest is the largest tropical rainforest in the world, covering over five and a half a million square kilometers (1.4 billion acres).",
    "The Amazon River basin covers approximately 6.7 million square kilometers (1.7 billion acres), in nine countries: Brazil, Bolivia, Peru, Ecuador, Colombia, Venezuela, Guyana, Suriname, and French Guiana.",
    "Brazil contains about 60 percent of the Amazon rainforest.",
    "The Amazon Rainforest has been in existence for at least 55 million years.",
    "The Amazon Rainforest has been around for at least 55 million years.",
    "More than 60,000 species of trees are found in the Amazon Rainforest.",
    "The Amazon Rainforest is home to about 2.5 million insect species.",
    "Approximately 390 billion individual trees divided into 16,000 species make up the Amazon Rainforest.",
    "The Amazon Rainforest is home to 427 mammal species, 1,300 bird species, 378 species of reptiles, and more than 400 species of amphibians.",
    "About one in ten known species in the world lives in the Amazon Rainforest.",
    "The Amazon Rainforest is known as the world's largest pharmacy because it produces 25% of the world's medicine.",
    "The Amazon Rainforest is home to more than 30 million people, including 350 indigenous and ethnic groups.",
    "The Amazon Rainforest contains over 1,000 natural ingredients that can be used for medicinal purposes.",
    "The Amazon Rainforest is believed to contain 3,000 fruits that are edible.",
    "The Amazon Rainforest has about 3,000 fruits that are edible.",
    "The Amazon Rainforest has 4,195 miles (6,731 kilometers) of river that winds through its territory.",
    "The Amazon Rainforest contains 20% of the world's flowing freshwater.",
    "The Amazon River discharges approximately 209,000 cubic meters of water per second (about 55.4 trillion gallons per day) into the Atlantic Ocean.",
    "The Amazon River is the world's largest river by discharge volume of water.",
    "The Amazon River is the world's second longest river, after the Nile.",
    "The Amazon River is approximately 4,345 miles (7,062 kilometers) long.",
    "The Amazon Rainforest has a total area of 2.1 million square miles (5.5 million square kilometers), about the size of the 48 contiguous United States.",
    "The Amazon Rainforest covers about 40% of South America's total area.",
    "The Amazon Rainforest has an estimated 390 billion individual trees.",
    "The Amazon Rainforest is home to about 2.5 million insect species.",
    "The Amazon Rainforest is home to more than 2,000 species of butterflies.",
    "The Amazon Rainforest is home to approximately 427 mammal species.",
    "The Amazon Rainforest is home to approximately 1,300 bird species.",
    "The Amazon Rainforest is home to about 378 species of reptiles.",
    "The Amazon Rainforest is home to more than 400 species of amphibians.",
    "The Amazon Rainforest is home to about 300 species of lizards.",
    "The Amazon Rainforest is home to approximately 200 species of snakes.",
    "The Amazon Rainforest is home to about 3,000 freshwater fish species.",

    "The Amazon Rainforest is the world's largest tropical rainforest.",
    
};


const char *safetyTips[] = {
    "Always wear a helmet when riding a bicycle.",
    "Never swim alone.",
    "Always look both ways before crossing the street.",
    "Never leave cooking unattended.",
    "Keep emergency contact numbers saved in your phone.",
    "Wear sunscreen to protect your skin from harmful UV rays.",
    "Regularly check your smoke detectors to ensure they are working properly.",
    "Never approach wild animals.",
    "Use handrails when going up or down stairs.",
    "Avoid texting or using your phone while driving.",
    "Use a designated driver if you plan on drinking alcohol.",
    "Keep a first aid kit in your home and car.",
    "Never leave candles burning unattended.",
    "Keep electrical cords away from water.",
    "Store heavy objects on lower shelves to prevent them from falling.",
    "Use caution when handling sharp objects.",
    "Take regular breaks when working long hours at a desk.",
    "Keep a safe distance from fireworks.",
    "Know the location of emergency exits in buildings you frequent.",
    "Teach children about stranger danger and how to ask for help.",
    "Regularly check the expiration dates of medications.",
    "Use proper lifting techniques to avoid back injuries.",
    "Avoid walking alone at night in unfamiliar areas.",
    "Keep matches and lighters out of reach of children.",
    "Make sure your carbon monoxide detectors are working properly.",
    "Keep your home and car keys in a consistent place to avoid misplacing them.",
    "Never leave children or pets unattended in a car.",
    "Keep a flashlight and extra batteries in case of power outages.",
    "Keep sidewalks and pathways clear of obstacles to prevent tripping.",
    "Regularly check and maintain your vehicle's brakes and tires.",
    "Keep a supply of non-perishable food and water in case of emergencies.",
    "Teach children how to swim at an early age.",
    "Install window guards to prevent falls, especially in homes with young children.",
    "Use caution when walking on icy or slippery surfaces.",
    "Keep sharp objects, such as knives, out of reach of children.",
    "Teach children how to use 911 in case of emergencies.",
    "Use insect repellent to prevent mosquito bites, especially in areas with diseases like malaria or Zika.",
    "Make sure your home is equipped with fire extinguishers.",
    "Use caution when using power tools.",
    "Keep emergency supplies in your car, such as blankets, water, and snacks.",
    "Regularly inspect and maintain your home's roof to prevent leaks.",
    "Avoid leaving valuables visible in your car to deter theft.",
    "Install childproof locks on cabinets and drawers.",
    "Regularly clean and inspect your chimney to prevent fires.",
    "Avoid using space heaters near flammable materials.",
    "Teach children about fire safety, including how to stop, drop, and roll.",
    "Keep emergency exits clear of obstructions.",
    "Use caution when using ladders, ensuring they are on stable ground and secured properly.",
    "Regularly clean out dryer vents to prevent fires.",
    "Keep a list of emergency contacts in your wallet or purse.",
    "Use caution when cooking with hot oil to avoid burns.",
    "Keep a fully stocked first aid kit in your home and car.",
    "Teach children how to properly use playground equipment.",
    "Make sure your home's address is clearly visible from the street.",
    "Use caution when handling hot beverages, especially around children.",
    "Keep a fire extinguisher in or near your kitchen.",
    "Secure heavy furniture to prevent tipping, especially in homes with young children.",
    "Keep a fire escape plan and practice it with your family.",
    "Use caution when using candles, ensuring they are placed on stable surfaces away from flammable materials.",
    "Keep emergency supplies, such as bottled water and non-perishable food, in your home.",
    "Teach children about the dangers of playing with matches and lighters.",
    "Use caution when walking on wet surfaces to prevent slipping.",
    "Regularly check your home's smoke detectors to ensure they are working properly.",
    "Keep your cell phone charged in case of emergencies.",
    "Avoid overloading electrical outlets.",
    "Teach children how to properly use kitchen appliances.",
    "Use caution when using power tools, ensuring you follow safety guidelines.",
    "Install carbon monoxide detectors in your home, especially near bedrooms.",
    "Use caution when handling hot objects, such as pots and pans.",
    "Keep cleaning products out of reach of children.",
    "Avoid leaving candles unattended.",
    "Keep your home's emergency exits clear of obstructions.",
    "Regularly check and maintain your car's brakes and tires.",
    "Keep a list of emergency contacts near your phone.",
    "Teach children how to swim at an early age.",
    "Use caution when swimming in open water, such as lakes and oceans.",
    "Keep a supply of bottled water in case of emergencies.",
    "Use caution when using space heaters, ensuring they are placed on stable surfaces away from flammable materials.",
    "Regularly check and maintain your home's heating system to prevent carbon monoxide leaks.",
    "Keep a flashlight and extra batteries in your home in case of power outages.",
    };


const char *productList[8] = {
    "Toothpaste", "Baking Soda", "AC", "Heatpumps",
    "Plastic Water Bottle", "Stainless Steel Water Bottle", "coal", "electric"
   
};

int numEnvironmentFacts = 50;
int numSafetyTips = 100; 
int numProducts = 8; 

void printEnvironmentFact(int index) {
    if (index >= 0 && index < numEnvironmentFacts) {
        printf("Environment Fact %d: %s\n", index + 1, environmentFacts[index]);
    } else {
        printf("Invalid environment fact index!\n");
    }
}

void printSafetyTip(int index) {
    if (index >= 0 && index < numSafetyTips) {
        printf("Safety Tip %d: %s\n", index + 1, safetyTips[index]);
    } else {
        printf("Invalid safety tip index!\n");
    }
}

void printProductAndAlternatives(int index) {
    if (index < numProducts) {
        printf("Product: %s\n", productList[index]);
        printf("Alternatives:\n");
        
            printf("Alternative is %s\n",productList[index + 1]);
        
    } else {
        printf("Invalid product index!\n");
    }
}

int main() {
    int choice;
    bool exit = false;

    while (!exit) {
        printf("\nMenu:\n");
        printf("1. Display an Environment Fact\n");
        printf("2. Display a Safety Tip\n");
        printf("3. Display a Product and its Alternatives\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        char ch[50];

        switch(choice) {
            case 1:
                printf("Enter the index of the environment fact (1-%d): ", numEnvironmentFacts);
                scanf("%d", &choice);
                printEnvironmentFact(choice - 1);
                break;
            case 2:
                printf("Enter the index of the safety tip (1-%d): ", numSafetyTips);
                scanf("%d", &choice);
                printSafetyTip(choice - 1);
                break;
            case 3:
                int flag = 0;
                printf("Enter the product alternative you want: ");
                scanf("%s", ch);
                for(int i = 0; i < numProducts; i++){
                    if (strcmp(productList[i], ch) == 0 && i%2==0) {
                        printProductAndAlternatives(i);
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0){
                    printf("Product not found\n");
                }
                break;
            case 0:
                exit = true;
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    printf("Exiting...\n");

    return 0;
}