import java.awt.*;
import javax.swing.*;

// import javax.swing.JT?extArea;

public class ThinkNext_Form extends Frame {
    public ThinkNext_Form() {
        // Set frame properties
        setTitle("ThinkNext Checklist Performa");
        setSize(700, 800);
        setLayout(new GridLayout(18, 2, 10, 10));
        

        // Create and add form components
        TextField studentNameField = new TextField(30);
        add(new Label("Student Name:"));
        add(studentNameField);

        TextField parentNameField = new TextField(30);
        add(new Label("Son of / Daughter of:"));
        add(parentNameField);

        TextField collegeField = new TextField(30);
        add(new Label("College:"));
        add(collegeField);

        TextArea currentAddressArea = new TextArea(5, 30);
        add(new Label("Current Address:"));
        add(currentAddressArea);

        TextField ownerNameField = new TextField(30);
        add(new Label("Owner Name:"));
        add(ownerNameField);

        TextField projectNameField = new TextField(30);
        add(new Label("Project Name:"));
        add(projectNameField);

        TextField contactField = new TextField(30);
        add(new Label("Contact:"));
        add(contactField);

        Checkbox feePendingCheckbox = new Checkbox("Fee Pending");
        add(feePendingCheckbox);
        add(new Label());

        TextField trainingCertFromDateField = new TextField(15);
        TextField trainingCertToDateField = new TextField(15);
        add(new Label("Training Certificate Date (From - To):"));
        add(trainingCertFromDateField);
        add(new Label());
        add(trainingCertToDateField);

        Checkbox projectCheckbox = new Checkbox("Project");
        Checkbox reportCheckbox = new Checkbox("Report");
        Checkbox slidesCheckbox = new Checkbox("Slides");
        Checkbox snapsOfProjectsCheckbox = new Checkbox("Snaps of Projects");
        Checkbox googleReviewsCheckbox = new Checkbox("Google Reviews");
        Checkbox facebookLikesCheckbox = new Checkbox("Facebook Likes");
        Checkbox facebookReviewsCheckbox = new Checkbox("Facebook Reviews");
        Checkbox thinknextEnglishReviewsCheckbox = new Checkbox("Thinknext English Reviews");
        Checkbox videosCheckbox = new Checkbox("Videos");

     
        add(new Label("Submission:"));
        Panel checkboxPanel = new Panel(new GridLayout(1, 1, 10, 8));
        checkboxPanel.add(projectCheckbox);
        checkboxPanel.add(reportCheckbox);
        checkboxPanel.add(slidesCheckbox);
        checkboxPanel.add(snapsOfProjectsCheckbox);
        checkboxPanel.add(googleReviewsCheckbox);
        checkboxPanel.add(facebookLikesCheckbox);
        checkboxPanel.add(facebookReviewsCheckbox);
        checkboxPanel.add(thinknextEnglishReviewsCheckbox);
        checkboxPanel.add(videosCheckbox);
        add(checkboxPanel);

       
    }

    public static void main(String[] args) {
        ThinkNext_Form form = new ThinkNext_Form();
        form.setVisible(true);
    }
}
